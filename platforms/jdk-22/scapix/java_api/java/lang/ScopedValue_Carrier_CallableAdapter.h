// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/Callable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_CALLABLEADAPTER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_CALLABLEADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ScopedValue_Carrier_CallableAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ScopedValue_Carrier_CallableAdapter>
{
	static constexpr fixed_string class_name = "java/lang/ScopedValue$Carrier$CallableAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::Callable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_CALLABLEADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_CALLABLEADAPTER)
#define SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_CALLABLEADAPTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ScopedValue_Carrier_CallableAdapter : public jni::object_base<"java/lang/ScopedValue$Carrier$CallableAdapter",
	java::lang::Object,
	java::util::concurrent::Callable>
{
public:

	jni::ref<java::lang::Object> call() { return call_method<"call", jni::ref<java::lang::Object>>(); }

protected:

	ScopedValue_Carrier_CallableAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_CARRIER_CALLABLEADAPTER
