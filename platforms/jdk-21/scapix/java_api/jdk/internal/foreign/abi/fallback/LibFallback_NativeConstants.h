// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_LIBFALLBACK_NATIVECONSTANTS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_LIBFALLBACK_NATIVECONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::fallback { class LibFallback_NativeConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::fallback::LibFallback_NativeConstants>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/fallback/LibFallback$NativeConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_LIBFALLBACK_NATIVECONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_LIBFALLBACK_NATIVECONSTANTS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_LIBFALLBACK_NATIVECONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::fallback::LibFallback_NativeConstants : public jni::object_base<"jdk/internal/foreign/abi/fallback/LibFallback$NativeConstants",
	java::lang::Object>
{
public:


protected:

	LibFallback_NativeConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_FALLBACK_LIBFALLBACK_NATIVECONSTANTS
