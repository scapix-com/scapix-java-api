// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERFACTORY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::ref { class CleanerFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::ref::CleanerFactory>
{
	static constexpr fixed_string class_name = "jdk/internal/ref/CleanerFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERFACTORY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ref/Cleaner.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::ref::CleanerFactory : public jni::object_base<"jdk/internal/ref/CleanerFactory",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::ref::CleanerFactory> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::ref::Cleaner> cleaner() { return call_static_method<"cleaner", jni::ref<java::lang::ref::Cleaner>>(); }

protected:

	CleanerFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REF_CLEANERFACTORY
