// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_NATIVEIMAGEBUFFER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_NATIVEIMAGEBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jimage { class NativeImageBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jimage::NativeImageBuffer>
{
	static constexpr fixed_string class_name = "jdk/internal/jimage/NativeImageBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_NATIVEIMAGEBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_NATIVEIMAGEBUFFER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_NATIVEIMAGEBUFFER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::jimage::NativeImageBuffer : public jni::object_base<"jdk/internal/jimage/NativeImageBuffer",
	java::lang::Object>
{
public:


protected:

	NativeImageBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JIMAGE_NATIVEIMAGEBUFFER
