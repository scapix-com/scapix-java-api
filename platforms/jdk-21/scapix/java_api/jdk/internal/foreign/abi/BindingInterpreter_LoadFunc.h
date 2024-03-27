// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_LOADFUNC_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_LOADFUNC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class BindingInterpreter_LoadFunc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::BindingInterpreter_LoadFunc>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/BindingInterpreter$LoadFunc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_LOADFUNC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_LOADFUNC)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_LOADFUNC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/jdk/internal/foreign/abi/VMStorage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::BindingInterpreter_LoadFunc : public jni::object_base<"jdk/internal/foreign/abi/BindingInterpreter$LoadFunc",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> load(jni::ref<jdk::internal::foreign::abi::VMStorage> p1, jni::ref<java::lang::Class> p2) { return call_method<"load", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	BindingInterpreter_LoadFunc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_BINDINGINTERPRETER_LOADFUNC
