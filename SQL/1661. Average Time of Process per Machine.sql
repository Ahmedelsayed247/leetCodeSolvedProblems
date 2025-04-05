
select machine_id ,Round(AVG(end_time-start_time) , 3) as processing_time 
from 
(
    select machine_id , process_id,
    MAX(case when activity_type = 'start' then timestamp end) as start_time,
    Max(case when activity_type = 'end' then timestamp end) as end_time
    from Activity 
    group by machine_id ,process_id 
) as processing_time

group by machine_id 