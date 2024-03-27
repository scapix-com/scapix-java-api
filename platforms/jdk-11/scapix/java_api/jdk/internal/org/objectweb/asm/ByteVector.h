// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_BYTEVECTOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_BYTEVECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class ByteVector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::ByteVector>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/ByteVector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_BYTEVECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_BYTEVECTOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_BYTEVECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::ByteVector : public jni::object_base<"jdk/internal/org/objectweb/asm/ByteVector",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> new_object() { return base_::new_object(); }
	static jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> new_object(jint initialSize) { return base_::new_object(initialSize); }
	jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> putByte(jint b) { return call_method<"putByte", jni::ref<jdk::internal::org::objectweb::asm_::ByteVector>>(b); }
	jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> putShort(jint s) { return call_method<"putShort", jni::ref<jdk::internal::org::objectweb::asm_::ByteVector>>(s); }
	jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> putInt(jint i) { return call_method<"putInt", jni::ref<jdk::internal::org::objectweb::asm_::ByteVector>>(i); }
	jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> putLong(jlong l) { return call_method<"putLong", jni::ref<jdk::internal::org::objectweb::asm_::ByteVector>>(l); }
	jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> putUTF8(jni::ref<java::lang::String> s) { return call_method<"putUTF8", jni::ref<jdk::internal::org::objectweb::asm_::ByteVector>>(s); }
	jni::ref<jdk::internal::org::objectweb::asm_::ByteVector> putByteArray(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"putByteArray", jni::ref<jdk::internal::org::objectweb::asm_::ByteVector>>(b, off, len); }

protected:

	ByteVector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_BYTEVECTOR