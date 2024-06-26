// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_ACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_ACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws { class Action; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::Action>
{
	static constexpr fixed_string class_name = "javax/xml/ws/Action";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_ACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_ACTION)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_ACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/ws/FaultAction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::Action : public jni::object_base<"javax/xml/ws/Action",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> input() { return call_method<"input", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> output() { return call_method<"output", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<javax::xml::ws::FaultAction>> fault() { return call_method<"fault", jni::ref<jni::array<javax::xml::ws::FaultAction>>>(); }

protected:

	Action(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_ACTION
