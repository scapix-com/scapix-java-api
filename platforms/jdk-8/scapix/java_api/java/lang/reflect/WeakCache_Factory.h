// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/Supplier.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WEAKCACHE_FACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WEAKCACHE_FACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class WeakCache_Factory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::WeakCache_Factory>
{
	static constexpr fixed_string class_name = "java/lang/reflect/WeakCache$Factory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::Supplier>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WEAKCACHE_FACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WEAKCACHE_FACTORY)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WEAKCACHE_FACTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::WeakCache_Factory : public jni::object_base<"java/lang/reflect/WeakCache$Factory",
	java::lang::Object,
	java::util::function::Supplier>
{
public:

	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }

protected:

	WeakCache_Factory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_WEAKCACHE_FACTORY
