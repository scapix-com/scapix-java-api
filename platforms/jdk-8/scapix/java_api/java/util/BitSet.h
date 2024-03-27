// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_BITSET_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_BITSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class BitSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::BitSet>
{
	static constexpr fixed_string class_name = "java/util/BitSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BITSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_BITSET)
#define SCAPIX_JAVA_API_JAVA_UTIL_BITSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/LongBuffer.h>
#include <scapix/java_api/java/util/stream/IntStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::BitSet : public jni::object_base<"java/util/BitSet",
	java::lang::Object,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::BitSet> new_object() { return base_::new_object(); }
	static jni::ref<java::util::BitSet> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::util::BitSet> valueOf(jni::ref<jni::array<jlong>> p1) { return call_static_method<"valueOf", jni::ref<java::util::BitSet>>(p1); }
	static jni::ref<java::util::BitSet> valueOf(jni::ref<java::nio::LongBuffer> p1) { return call_static_method<"valueOf", jni::ref<java::util::BitSet>>(p1); }
	static jni::ref<java::util::BitSet> valueOf(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"valueOf", jni::ref<java::util::BitSet>>(p1); }
	static jni::ref<java::util::BitSet> valueOf(jni::ref<java::nio::ByteBuffer> p1) { return call_static_method<"valueOf", jni::ref<java::util::BitSet>>(p1); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jlong>> toLongArray() { return call_method<"toLongArray", jni::ref<jni::array<jlong>>>(); }
	void flip(jint p1) { return call_method<"flip", void>(p1); }
	void flip(jint p1, jint p2) { return call_method<"flip", void>(p1, p2); }
	void set(jint p1) { return call_method<"set", void>(p1); }
	void set(jint p1, jboolean p2) { return call_method<"set", void>(p1, p2); }
	void set(jint p1, jint p2) { return call_method<"set", void>(p1, p2); }
	void set(jint p1, jint p2, jboolean p3) { return call_method<"set", void>(p1, p2, p3); }
	void clear(jint p1) { return call_method<"clear", void>(p1); }
	void clear(jint p1, jint p2) { return call_method<"clear", void>(p1, p2); }
	void clear() { return call_method<"clear", void>(); }
	jboolean get(jint p1) { return call_method<"get", jboolean>(p1); }
	jni::ref<java::util::BitSet> get(jint p1, jint p2) { return call_method<"get", jni::ref<java::util::BitSet>>(p1, p2); }
	jint nextSetBit(jint p1) { return call_method<"nextSetBit", jint>(p1); }
	jint nextClearBit(jint p1) { return call_method<"nextClearBit", jint>(p1); }
	jint previousSetBit(jint p1) { return call_method<"previousSetBit", jint>(p1); }
	jint previousClearBit(jint p1) { return call_method<"previousClearBit", jint>(p1); }
	jint length() { return call_method<"length", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean intersects(jni::ref<java::util::BitSet> p1) { return call_method<"intersects", jboolean>(p1); }
	jint cardinality() { return call_method<"cardinality", jint>(); }
	void and_(jni::ref<java::util::BitSet> p1) { return call_method<"and", void>(p1); }
	void or_(jni::ref<java::util::BitSet> p1) { return call_method<"or", void>(p1); }
	void xor_(jni::ref<java::util::BitSet> p1) { return call_method<"xor", void>(p1); }
	void andNot(jni::ref<java::util::BitSet> p1) { return call_method<"andNot", void>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::stream::IntStream> stream() { return call_method<"stream", jni::ref<java::util::stream::IntStream>>(); }

protected:

	BitSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_BITSET
