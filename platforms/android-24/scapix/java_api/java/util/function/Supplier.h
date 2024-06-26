// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_SUPPLIER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_SUPPLIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::function { class Supplier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::function::Supplier>
{
	static constexpr fixed_string class_name = "java/util/function/Supplier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_SUPPLIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_SUPPLIER)
#define SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_SUPPLIER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::function::Supplier : public jni::object_base<"java/util/function/Supplier",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }

protected:

	Supplier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FUNCTION_SUPPLIER
