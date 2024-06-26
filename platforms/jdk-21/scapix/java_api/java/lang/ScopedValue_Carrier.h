// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ScopedValue_Carrier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ScopedValue_Carrier>
{
	static constexpr fixed_string class_name = "java/lang/ScopedValue$Carrier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER)
#define SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/ScopedValue.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ScopedValue_Carrier : public jni::object_base<"java/lang/ScopedValue$Carrier",
	java::lang::Object>
{
public:

	jni::ref<java::lang::ScopedValue_Carrier> where(jni::ref<java::lang::ScopedValue> key, jni::ref<java::lang::Object> value) { return call_method<"where", jni::ref<java::lang::ScopedValue_Carrier>>(key, value); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::ScopedValue> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::lang::Object> call(jni::ref<java::util::concurrent::Callable> op) { return call_method<"call", jni::ref<java::lang::Object>>(op); }
	jni::ref<java::lang::Object> get(jni::ref<java::util::function::Supplier> op) { return call_method<"get", jni::ref<java::lang::Object>>(op); }
	void run(jni::ref<java::lang::Runnable> op) { return call_method<"run", void>(op); }

protected:

	ScopedValue_Carrier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER
