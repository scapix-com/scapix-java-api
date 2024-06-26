// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_NODECHANGEEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_NODECHANGEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class NodeChangeEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::NodeChangeEvent>
{
	static constexpr fixed_string class_name = "java/util/prefs/NodeChangeEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_NODECHANGEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_NODECHANGEEVENT)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_NODECHANGEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/prefs/Preferences.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::prefs::NodeChangeEvent : public jni::object_base<"java/util/prefs/NodeChangeEvent",
	java::util::EventObject,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::prefs::NodeChangeEvent> new_object(jni::ref<java::util::prefs::Preferences> p, jni::ref<java::util::prefs::Preferences> c) { return base_::new_object(p, c); }
	jni::ref<java::util::prefs::Preferences> getParent() { return call_method<"getParent", jni::ref<java::util::prefs::Preferences>>(); }
	jni::ref<java::util::prefs::Preferences> getChild() { return call_method<"getChild", jni::ref<java::util::prefs::Preferences>>(); }

protected:

	NodeChangeEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_NODECHANGEEVENT
