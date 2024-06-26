// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class Notification; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::Notification>
{
	static constexpr fixed_string class_name = "javax/management/Notification";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::Notification : public jni::object_base<"javax/management/Notification",
	java::util::EventObject>
{
public:

	static jni::ref<javax::management::Notification> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jlong p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::management::Notification> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jlong p3, jni::ref<java::lang::String> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<javax::management::Notification> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jlong p3, jlong p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<javax::management::Notification> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jlong p3, jlong p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	void setSource(jni::ref<java::lang::Object> p1) { return call_method<"setSource", void>(p1); }
	jlong getSequenceNumber() { return call_method<"getSequenceNumber", jlong>(); }
	void setSequenceNumber(jlong p1) { return call_method<"setSequenceNumber", void>(p1); }
	jni::ref<java::lang::String> getType() { return call_method<"getType", jni::ref<java::lang::String>>(); }
	jlong getTimeStamp() { return call_method<"getTimeStamp", jlong>(); }
	void setTimeStamp(jlong p1) { return call_method<"setTimeStamp", void>(p1); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getUserData() { return call_method<"getUserData", jni::ref<java::lang::Object>>(); }
	void setUserData(jni::ref<java::lang::Object> p1) { return call_method<"setUserData", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Notification(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATION
