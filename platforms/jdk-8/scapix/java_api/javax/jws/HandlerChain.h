// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_JWS_HANDLERCHAIN_FWD
#define SCAPIX_JAVA_API_JAVAX_JWS_HANDLERCHAIN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::jws { class HandlerChain; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::jws::HandlerChain>
{
	static constexpr fixed_string class_name = "javax/jws/HandlerChain";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_JWS_HANDLERCHAIN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_JWS_HANDLERCHAIN)
#define SCAPIX_JAVA_API_JAVAX_JWS_HANDLERCHAIN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::jws::HandlerChain : public jni::object_base<"javax/jws/HandlerChain",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> file() { return call_method<"file", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }

protected:

	HandlerChain(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_JWS_HANDLERCHAIN
