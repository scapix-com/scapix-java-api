// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BITARRAY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BITARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class BitArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::BitArray>
{
	static constexpr fixed_string class_name = "sun/security/util/BitArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BITARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BITARRAY)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BITARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::BitArray : public jni::object_base<"sun/security/util/BitArray",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::BitArray> new_object(jint length) { return base_::new_object(length); }
	static jni::ref<sun::security::util::BitArray> new_object(jint length, jni::ref<jni::array<jbyte>> a) { return base_::new_object(length, a); }
	static jni::ref<sun::security::util::BitArray> new_object(jint length, jni::ref<jni::array<jbyte>> a, jint ofs) { return base_::new_object(length, a, ofs); }
	static jni::ref<sun::security::util::BitArray> new_object(jni::ref<jni::array<jboolean>> bits) { return base_::new_object(bits); }
	jboolean get(jint index) { return call_method<"get", jboolean>(index); }
	void set(jint index, jboolean value) { return call_method<"set", void>(index, value); }
	jint length() { return call_method<"length", jint>(); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<jni::array<jboolean>> toBooleanArray() { return call_method<"toBooleanArray", jni::ref<jni::array<jboolean>>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<sun::security::util::BitArray> truncate() { return call_method<"truncate", jni::ref<sun::security::util::BitArray>>(); }

protected:

	BitArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BITARRAY
