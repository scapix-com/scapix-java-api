// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/Context.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_EVENT_EVENTCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_EVENT_EVENTCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::event { class EventContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::event::EventContext>
{
	static constexpr fixed_string class_name = "javax/naming/event/EventContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::Context>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_EVENT_EVENTCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_EVENT_EVENTCONTEXT)
#define SCAPIX_JAVA_API_JAVAX_NAMING_EVENT_EVENTCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/Name.h>
#include <scapix/java_api/javax/naming/event/NamingListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::event::EventContext : public jni::object_base<"javax/naming/event/EventContext",
	java::lang::Object,
	javax::naming::Context>
{
public:

	static jint OBJECT_SCOPE() { return get_static_field<"OBJECT_SCOPE", jint>(); }
	static jint ONELEVEL_SCOPE() { return get_static_field<"ONELEVEL_SCOPE", jint>(); }
	static jint SUBTREE_SCOPE() { return get_static_field<"SUBTREE_SCOPE", jint>(); }

	void addNamingListener(jni::ref<javax::naming::Name> p1, jint p2, jni::ref<javax::naming::event::NamingListener> p3) { return call_method<"addNamingListener", void>(p1, p2, p3); }
	void addNamingListener(jni::ref<java::lang::String> p1, jint p2, jni::ref<javax::naming::event::NamingListener> p3) { return call_method<"addNamingListener", void>(p1, p2, p3); }
	void removeNamingListener(jni::ref<javax::naming::event::NamingListener> p1) { return call_method<"removeNamingListener", void>(p1); }
	jboolean targetMustExist() { return call_method<"targetMustExist", jboolean>(); }

protected:

	EventContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_EVENT_EVENTCONTEXT
