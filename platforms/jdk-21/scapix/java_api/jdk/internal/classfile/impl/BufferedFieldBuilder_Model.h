// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractUnboundModel.h>
#include <scapix/java_api/jdk/internal/classfile/FieldModel.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_MODEL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_MODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BufferedFieldBuilder_Model; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BufferedFieldBuilder_Model>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BufferedFieldBuilder$Model";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractUnboundModel, scapix::java_api::jdk::internal::classfile::FieldModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_MODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_MODEL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_MODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/jdk/internal/classfile/AccessFlags.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BufferedFieldBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectClassBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BufferedFieldBuilder_Model : public jni::object_base<"jdk/internal/classfile/impl/BufferedFieldBuilder$Model",
	jdk::internal::classfile::impl::AbstractUnboundModel,
	jdk::internal::classfile::FieldModel>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BufferedFieldBuilder_Model> new_object(jni::ref<jdk::internal::classfile::impl::BufferedFieldBuilder> this_0) { return base_::new_object(this_0); }
	jni::ref<java::util::Optional> parent() { return call_method<"parent", jni::ref<java::util::Optional>>(); }
	jni::ref<jdk::internal::classfile::AccessFlags> flags() { return call_method<"flags", jni::ref<jdk::internal::classfile::AccessFlags>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> fieldName() { return call_method<"fieldName", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> fieldType() { return call_method<"fieldType", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectClassBuilder> builder) { return call_method<"writeTo", void>(builder); }
	void writeTo(jni::ref<jdk::internal::classfile::BufWriter> buf) { return call_method<"writeTo", void>(buf); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	BufferedFieldBuilder_Model(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_MODEL
