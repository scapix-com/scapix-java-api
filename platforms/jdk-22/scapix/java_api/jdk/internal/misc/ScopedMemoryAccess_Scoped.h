// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPED_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class ScopedMemoryAccess_Scoped; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::ScopedMemoryAccess_Scoped>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/ScopedMemoryAccess$Scoped";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPED)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPED

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::misc::ScopedMemoryAccess_Scoped : public jni::object_base<"jdk/internal/misc/ScopedMemoryAccess$Scoped",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	ScopedMemoryAccess_Scoped(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SCOPEDMEMORYACCESS_SCOPED
