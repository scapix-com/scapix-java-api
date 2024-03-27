// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/loader/NativeLibrary.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_NATIVELIBRARYIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_NATIVELIBRARYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class NativeLibraries_NativeLibraryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::NativeLibraries_NativeLibraryImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/NativeLibraries$NativeLibraryImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::loader::NativeLibrary>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_NATIVELIBRARYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_NATIVELIBRARYIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_NATIVELIBRARYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::loader::NativeLibraries_NativeLibraryImpl : public jni::object_base<"jdk/internal/loader/NativeLibraries$NativeLibraryImpl",
	jdk::internal::loader::NativeLibrary>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jlong find(jni::ref<java::lang::String> name) { return call_method<"find", jlong>(name); }

protected:

	NativeLibraries_NativeLibraryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_NATIVELIBRARIES_NATIVELIBRARYIMPL
