// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class MemoryType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::MemoryType>
{
	static constexpr fixed_string class_name = "java/lang/management/MemoryType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYTYPE)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::management::MemoryType : public jni::object_base<"java/lang/management/MemoryType",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::management::MemoryType> HEAP() { return get_static_field<"HEAP", jni::ref<java::lang::management::MemoryType>>(); }
	static jni::ref<java::lang::management::MemoryType> NON_HEAP() { return get_static_field<"NON_HEAP", jni::ref<java::lang::management::MemoryType>>(); }

	static jni::ref<jni::array<java::lang::management::MemoryType>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::management::MemoryType>>>(); }
	static jni::ref<java::lang::management::MemoryType> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::lang::management::MemoryType>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MemoryType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYTYPE
