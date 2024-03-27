// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_UNLOADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_UNLOADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class NativeLibraries_Unloader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::NativeLibraries_Unloader>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/NativeLibraries$Unloader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_UNLOADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_UNLOADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_UNLOADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::loader::NativeLibraries_Unloader : public jni::object_base<"jdk/internal/loader/NativeLibraries$Unloader",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	NativeLibraries_Unloader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_UNLOADER