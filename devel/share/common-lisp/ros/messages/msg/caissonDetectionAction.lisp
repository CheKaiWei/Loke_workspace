; Auto-generated. Do not edit!


(cl:in-package messages-msg)


;//! \htmlinclude caissonDetectionAction.msg.html

(cl:defclass <caissonDetectionAction> (roslisp-msg-protocol:ros-message)
  ((action_goal
    :reader action_goal
    :initarg :action_goal
    :type messages-msg:caissonDetectionActionGoal
    :initform (cl:make-instance 'messages-msg:caissonDetectionActionGoal))
   (action_result
    :reader action_result
    :initarg :action_result
    :type messages-msg:caissonDetectionActionResult
    :initform (cl:make-instance 'messages-msg:caissonDetectionActionResult))
   (action_feedback
    :reader action_feedback
    :initarg :action_feedback
    :type messages-msg:caissonDetectionActionFeedback
    :initform (cl:make-instance 'messages-msg:caissonDetectionActionFeedback)))
)

(cl:defclass caissonDetectionAction (<caissonDetectionAction>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <caissonDetectionAction>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'caissonDetectionAction)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name messages-msg:<caissonDetectionAction> is deprecated: use messages-msg:caissonDetectionAction instead.")))

(cl:ensure-generic-function 'action_goal-val :lambda-list '(m))
(cl:defmethod action_goal-val ((m <caissonDetectionAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader messages-msg:action_goal-val is deprecated.  Use messages-msg:action_goal instead.")
  (action_goal m))

(cl:ensure-generic-function 'action_result-val :lambda-list '(m))
(cl:defmethod action_result-val ((m <caissonDetectionAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader messages-msg:action_result-val is deprecated.  Use messages-msg:action_result instead.")
  (action_result m))

(cl:ensure-generic-function 'action_feedback-val :lambda-list '(m))
(cl:defmethod action_feedback-val ((m <caissonDetectionAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader messages-msg:action_feedback-val is deprecated.  Use messages-msg:action_feedback instead.")
  (action_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <caissonDetectionAction>) ostream)
  "Serializes a message object of type '<caissonDetectionAction>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_goal) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_result) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_feedback) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <caissonDetectionAction>) istream)
  "Deserializes a message object of type '<caissonDetectionAction>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_goal) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_result) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_feedback) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<caissonDetectionAction>)))
  "Returns string type for a message object of type '<caissonDetectionAction>"
  "messages/caissonDetectionAction")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'caissonDetectionAction)))
  "Returns string type for a message object of type 'caissonDetectionAction"
  "messages/caissonDetectionAction")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<caissonDetectionAction>)))
  "Returns md5sum for a message object of type '<caissonDetectionAction>"
  "1915102c6a7b64915c76eca29140c205")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'caissonDetectionAction)))
  "Returns md5sum for a message object of type 'caissonDetectionAction"
  "1915102c6a7b64915c76eca29140c205")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<caissonDetectionAction>)))
  "Returns full string definition for message of type '<caissonDetectionAction>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%caissonDetectionActionGoal action_goal~%caissonDetectionActionResult action_result~%caissonDetectionActionFeedback action_feedback~%~%================================================================================~%MSG: messages/caissonDetectionActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%caissonDetectionGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: messages/caissonDetectionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#Send a flag to server to caisson detection the thread start, pause, restart and stop~%#command == 1 start~%#command == 2 pause~%#command == 3 stop~%int32 command~%~%================================================================================~%MSG: messages/caissonDetectionActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%caissonDetectionResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: messages/caissonDetectionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float32 result~%~%================================================================================~%MSG: messages/caissonDetectionActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%caissonDetectionFeedback feedback~%~%================================================================================~%MSG: messages/caissonDetectionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%bool detected~%int32  error_code~%string error_msg~%int16 dis~%bool  isCheck~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'caissonDetectionAction)))
  "Returns full string definition for message of type 'caissonDetectionAction"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%caissonDetectionActionGoal action_goal~%caissonDetectionActionResult action_result~%caissonDetectionActionFeedback action_feedback~%~%================================================================================~%MSG: messages/caissonDetectionActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%caissonDetectionGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: messages/caissonDetectionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#Send a flag to server to caisson detection the thread start, pause, restart and stop~%#command == 1 start~%#command == 2 pause~%#command == 3 stop~%int32 command~%~%================================================================================~%MSG: messages/caissonDetectionActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%caissonDetectionResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: messages/caissonDetectionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float32 result~%~%================================================================================~%MSG: messages/caissonDetectionActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%caissonDetectionFeedback feedback~%~%================================================================================~%MSG: messages/caissonDetectionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%bool detected~%int32  error_code~%string error_msg~%int16 dis~%bool  isCheck~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <caissonDetectionAction>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_goal))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_result))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <caissonDetectionAction>))
  "Converts a ROS message object to a list"
  (cl:list 'caissonDetectionAction
    (cl:cons ':action_goal (action_goal msg))
    (cl:cons ':action_result (action_result msg))
    (cl:cons ':action_feedback (action_feedback msg))
))
