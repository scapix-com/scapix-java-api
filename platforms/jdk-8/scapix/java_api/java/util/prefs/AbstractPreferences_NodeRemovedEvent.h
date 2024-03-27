// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/prefs/NodeChangeEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEREMOVEDEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEREMOVEDEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class AbstractPreferences_NodeRemovedEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::AbstractPreferences_NodeRemovedEvent>
{
	static constexpr fixed_string class_name = "java/util/prefs/AbstractPreferences$NodeRemovedEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::prefs::NodeChangeEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEREMOVEDEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEREMOVEDEVENT)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEREMOVEDEVENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::prefs::AbstractPreferences_NodeRemovedEvent : public jni::object_base<"java/util/prefs/AbstractPreferences$NodeRemovedEvent",
	java::util::prefs::NodeChangeEvent>
{
public:


protected:

	AbstractPreferences_NodeRemovedEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEREMOVEDEVENT
