// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/ref/PhantomCleanable.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERIMPL_CLEANERCLEANABLE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERIMPL_CLEANERCLEANABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::ref { class CleanerImpl_CleanerCleanable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::ref::CleanerImpl_CleanerCleanable>
{
	static constexpr fixed_string class_name = "jdk/internal/ref/CleanerImpl$CleanerCleanable";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::ref::PhantomCleanable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERIMPL_CLEANERCLEANABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERIMPL_CLEANERCLEANABLE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERIMPL_CLEANERCLEANABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::ref::CleanerImpl_CleanerCleanable : public jni::object_base<"jdk/internal/ref/CleanerImpl$CleanerCleanable",
	jdk::internal::ref::PhantomCleanable>
{
public:


protected:

	CleanerImpl_CleanerCleanable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERIMPL_CLEANERCLEANABLE
