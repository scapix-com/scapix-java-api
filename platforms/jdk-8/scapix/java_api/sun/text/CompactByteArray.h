// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_COMPACTBYTEARRAY_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_COMPACTBYTEARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text { class CompactByteArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::CompactByteArray>
{
	static constexpr fixed_string class_name = "sun/text/CompactByteArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_COMPACTBYTEARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_COMPACTBYTEARRAY)
#define SCAPIX_JAVA_API_SUN_TEXT_COMPACTBYTEARRAY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::CompactByteArray : public jni::object_base<"sun/text/CompactByteArray",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jint UNICODECOUNT() { return get_static_field<"UNICODECOUNT", jint>(); }

	static jni::ref<sun::text::CompactByteArray> new_object(jbyte p1) { return base_::new_object(p1); }
	static jni::ref<sun::text::CompactByteArray> new_object(jni::ref<jni::array<jshort>> p1, jni::ref<jni::array<jbyte>> p2) { return base_::new_object(p1, p2); }
	jbyte elementAt(jchar p1) { return call_method<"elementAt", jbyte>(p1); }
	void setElementAt(jchar p1, jbyte p2) { return call_method<"setElementAt", void>(p1, p2); }
	void setElementAt(jchar p1, jchar p2, jbyte p3) { return call_method<"setElementAt", void>(p1, p2, p3); }
	void compact() { return call_method<"compact", void>(); }
	jni::ref<jni::array<jshort>> getIndexArray() { return call_method<"getIndexArray", jni::ref<jni::array<jshort>>>(); }
	jni::ref<jni::array<jbyte>> getStringArray() { return call_method<"getStringArray", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	CompactByteArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_COMPACTBYTEARRAY
