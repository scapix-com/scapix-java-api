// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class BindingInterpreter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::BindingInterpreter>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/BindingInterpreter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/foreign/abi/BindingInterpreter_StoreFunc.h>
#include <scapix/java_api/jdk/internal/foreign/abi/BindingInterpreter_LoadFunc.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::BindingInterpreter : public jni::object_base<"jdk/internal/foreign/abi/BindingInterpreter",
	java::lang::Object>
{
public:

	using StoreFunc = BindingInterpreter_StoreFunc;
	using LoadFunc = BindingInterpreter_LoadFunc;

	static jni::ref<jdk::internal::foreign::abi::BindingInterpreter> new_object() { return base_::new_object(); }

protected:

	BindingInterpreter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER