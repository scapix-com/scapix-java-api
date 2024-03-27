// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/reflect/ByteVector.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_BYTEVECTORIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_BYTEVECTORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class ByteVectorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::ByteVectorImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/ByteVectorImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::reflect::ByteVector>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_BYTEVECTORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_BYTEVECTORIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_BYTEVECTORIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::ByteVectorImpl : public jni::object_base<"jdk/internal/reflect/ByteVectorImpl",
	java::lang::Object,
	jdk::internal::reflect::ByteVector>
{
public:

	static jni::ref<jdk::internal::reflect::ByteVectorImpl> new_object() { return base_::new_object(); }
	static jni::ref<jdk::internal::reflect::ByteVectorImpl> new_object(jint sz) { return base_::new_object(sz); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jbyte get(jint index) { return call_method<"get", jbyte>(index); }
	void put(jint index, jbyte value) { return call_method<"put", void>(index, value); }
	void add(jbyte value) { return call_method<"add", void>(value); }
	void trim() { return call_method<"trim", void>(); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }

protected:

	ByteVectorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_BYTEVECTORIMPL