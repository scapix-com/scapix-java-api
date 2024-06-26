// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/ClassfileTransform.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDTRANSFORM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class FieldTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::FieldTransform>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/FieldTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::ClassfileTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDTRANSFORM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDTRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/jdk/internal/classfile/ClassfileTransform_ResolvedTransform.h>
#include <scapix/java_api/jdk/internal/classfile/FieldBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::FieldTransform : public jni::object_base<"jdk/internal/classfile/FieldTransform",
	java::lang::Object,
	jdk::internal::classfile::ClassfileTransform>
{
public:

	static jni::ref<jdk::internal::classfile::FieldTransform> ACCEPT_ALL() { return get_static_field<"ACCEPT_ALL", jni::ref<jdk::internal::classfile::FieldTransform>>(); }

	static jni::ref<jdk::internal::classfile::FieldTransform> ofStateful(jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"ofStateful", jni::ref<jdk::internal::classfile::FieldTransform>>(supplier); }
	static jni::ref<jdk::internal::classfile::FieldTransform> endHandler(jni::ref<java::util::function::Consumer> finisher) { return call_static_method<"endHandler", jni::ref<jdk::internal::classfile::FieldTransform>>(finisher); }
	static jni::ref<jdk::internal::classfile::FieldTransform> dropping(jni::ref<java::util::function::Predicate> filter) { return call_static_method<"dropping", jni::ref<jdk::internal::classfile::FieldTransform>>(filter); }
	jni::ref<jdk::internal::classfile::FieldTransform> andThen(jni::ref<jdk::internal::classfile::FieldTransform> t) { return call_method<"andThen", jni::ref<jdk::internal::classfile::FieldTransform>>(t); }
	jni::ref<jdk::internal::classfile::ClassfileTransform_ResolvedTransform> resolve(jni::ref<jdk::internal::classfile::FieldBuilder> builder) { return call_method<"resolve", jni::ref<jdk::internal::classfile::ClassfileTransform_ResolvedTransform>>(builder); }

protected:

	FieldTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_FIELDTRANSFORM
