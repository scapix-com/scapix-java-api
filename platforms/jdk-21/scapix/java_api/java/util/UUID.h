// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_UUID_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_UUID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class UUID; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::UUID>
{
	static constexpr fixed_string class_name = "java/util/UUID";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_UUID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_UUID)
#define SCAPIX_JAVA_API_JAVA_UTIL_UUID

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::UUID : public jni::object_base<"java/util/UUID",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Comparable>
{
public:

	static jni::ref<java::util::UUID> new_object(jlong mostSigBits, jlong p2) { return base_::new_object(mostSigBits, p2); }
	static jni::ref<java::util::UUID> randomUUID() { return call_static_method<"randomUUID", jni::ref<java::util::UUID>>(); }
	static jni::ref<java::util::UUID> nameUUIDFromBytes(jni::ref<jni::array<jbyte>> name) { return call_static_method<"nameUUIDFromBytes", jni::ref<java::util::UUID>>(name); }
	static jni::ref<java::util::UUID> fromString(jni::ref<java::lang::String> name) { return call_static_method<"fromString", jni::ref<java::util::UUID>>(name); }
	jlong getLeastSignificantBits() { return call_method<"getLeastSignificantBits", jlong>(); }
	jlong getMostSignificantBits() { return call_method<"getMostSignificantBits", jlong>(); }
	jint version() { return call_method<"version", jint>(); }
	jint variant() { return call_method<"variant", jint>(); }
	jlong timestamp() { return call_method<"timestamp", jlong>(); }
	jint clockSequence() { return call_method<"clockSequence", jint>(); }
	jlong node() { return call_method<"node", jlong>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint compareTo(jni::ref<java::util::UUID> val) { return call_method<"compareTo", jint>(val); }

protected:

	UUID(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_UUID
