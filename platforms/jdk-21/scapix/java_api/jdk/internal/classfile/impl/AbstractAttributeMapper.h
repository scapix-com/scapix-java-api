// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/AttributeMapper.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTATTRIBUTEMAPPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTATTRIBUTEMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractAttributeMapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractAttributeMapper>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractAttributeMapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::AttributeMapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTATTRIBUTEMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTATTRIBUTEMAPPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTATTRIBUTEMAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/Attribute.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractAttributeMapper : public jni::object_base<"jdk/internal/classfile/impl/AbstractAttributeMapper",
	java::lang::Object,
	jdk::internal::classfile::AttributeMapper>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractAttributeMapper> new_object(jni::ref<java::lang::String> name) { return base_::new_object(name); }
	static jni::ref<jdk::internal::classfile::impl::AbstractAttributeMapper> new_object(jni::ref<java::lang::String> name, jboolean allowMultiple) { return base_::new_object(name, allowMultiple); }
	static jni::ref<jdk::internal::classfile::impl::AbstractAttributeMapper> new_object(jni::ref<java::lang::String> name, jint majorVersion) { return base_::new_object(name, majorVersion); }
	static jni::ref<jdk::internal::classfile::impl::AbstractAttributeMapper> new_object(jni::ref<java::lang::String> name, jboolean allowMultiple, jint majorVersion) { return base_::new_object(name, allowMultiple, majorVersion); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	void writeAttribute(jni::ref<jdk::internal::classfile::BufWriter> buf, jni::ref<jdk::internal::classfile::Attribute> attr) { return call_method<"writeAttribute", void>(buf, attr); }
	jboolean allowMultiple() { return call_method<"allowMultiple", jboolean>(); }
	jint validSince() { return call_method<"validSince", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractAttributeMapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTATTRIBUTEMAPPER
