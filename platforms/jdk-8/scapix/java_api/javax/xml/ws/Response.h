// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/Future.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_RESPONSE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_RESPONSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws { class Response; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::Response>
{
	static constexpr fixed_string class_name = "javax/xml/ws/Response";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::Future>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_RESPONSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_RESPONSE)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_RESPONSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::Response : public jni::object_base<"javax/xml/ws/Response",
	java::lang::Object,
	java::util::concurrent::Future>
{
public:

	jni::ref<java::util::Map> getContext() { return call_method<"getContext", jni::ref<java::util::Map>>(); }

protected:

	Response(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_RESPONSE