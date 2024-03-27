// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_DEFAULTROOTS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_DEFAULTROOTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class DefaultRoots; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::DefaultRoots>
{
	static constexpr fixed_string class_name = "jdk/internal/module/DefaultRoots";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_DEFAULTROOTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_DEFAULTROOTS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_DEFAULTROOTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/module/ModuleFinder.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::module::DefaultRoots : public jni::object_base<"jdk/internal/module/DefaultRoots",
	java::lang::Object>
{
public:

	static jni::ref<java::util::Set> compute(jni::ref<java::lang::module::ModuleFinder> finder) { return call_static_method<"compute", jni::ref<java::util::Set>>(finder); }

protected:

	DefaultRoots(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_DEFAULTROOTS
