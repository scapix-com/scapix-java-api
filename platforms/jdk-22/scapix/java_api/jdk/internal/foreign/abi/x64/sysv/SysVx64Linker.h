// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/abi/AbstractLinker.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_SYSVX64LINKER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_SYSVX64LINKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::x64::sysv { class SysVx64Linker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::x64::sysv::SysVx64Linker>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/x64/sysv/SysVx64Linker";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::abi::AbstractLinker>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_SYSVX64LINKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_SYSVX64LINKER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_SYSVX64LINKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::x64::sysv::SysVx64Linker : public jni::object_base<"jdk/internal/foreign/abi/x64/sysv/SysVx64Linker",
	jdk::internal::foreign::abi::AbstractLinker>
{
public:

	static jni::ref<jdk::internal::foreign::abi::x64::sysv::SysVx64Linker> getInstance() { return call_static_method<"getInstance", jni::ref<jdk::internal::foreign::abi::x64::sysv::SysVx64Linker>>(); }
	jni::ref<java::util::Map> canonicalLayouts() { return call_method<"canonicalLayouts", jni::ref<java::util::Map>>(); }

protected:

	SysVx64Linker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_SYSVX64LINKER
