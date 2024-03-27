// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPE_SCOPEDACCESSERROR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPE_SCOPEDACCESSERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class ScopedMemoryAccess_Scope_ScopedAccessError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::ScopedMemoryAccess_Scope_ScopedAccessError>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPE_SCOPEDACCESSERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPE_SCOPEDACCESSERROR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPE_SCOPEDACCESSERROR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::misc::ScopedMemoryAccess_Scope_ScopedAccessError : public jni::object_base<"jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError",
	java::lang::Error>
{
public:

	static jni::ref<jdk::internal::misc::ScopedMemoryAccess_Scope_ScopedAccessError> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<jdk::internal::misc::ScopedMemoryAccess_Scope_ScopedAccessError>>(); }


protected:

	ScopedMemoryAccess_Scope_ScopedAccessError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPE_SCOPEDACCESSERROR