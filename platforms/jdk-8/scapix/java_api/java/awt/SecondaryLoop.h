// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_SECONDARYLOOP_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_SECONDARYLOOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class SecondaryLoop; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::SecondaryLoop>
{
	static constexpr fixed_string class_name = "java/awt/SecondaryLoop";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_SECONDARYLOOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_SECONDARYLOOP)
#define SCAPIX_JAVA_API_JAVA_AWT_SECONDARYLOOP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::SecondaryLoop : public jni::object_base<"java/awt/SecondaryLoop",
	java::lang::Object>
{
public:

	jboolean enter() { return call_method<"enter", jboolean>(); }
	jboolean exit() { return call_method<"exit", jboolean>(); }

protected:

	SecondaryLoop(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_SECONDARYLOOP