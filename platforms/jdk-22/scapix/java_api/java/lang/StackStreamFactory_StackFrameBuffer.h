// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/StackStreamFactory_FrameBuffer.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_STACKFRAMEBUFFER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_STACKFRAMEBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class StackStreamFactory_StackFrameBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::StackStreamFactory_StackFrameBuffer>
{
	static constexpr fixed_string class_name = "java/lang/StackStreamFactory$StackFrameBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::StackStreamFactory_FrameBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_STACKFRAMEBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_STACKFRAMEBUFFER)
#define SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_STACKFRAMEBUFFER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::StackStreamFactory_StackFrameBuffer : public jni::object_base<"java/lang/StackStreamFactory$StackFrameBuffer",
	java::lang::StackStreamFactory_FrameBuffer>
{
public:


protected:

	StackStreamFactory_StackFrameBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_STACKSTREAMFACTORY_STACKFRAMEBUFFER
