// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/attribute/RecordComponentInfo.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDRECORDCOMPONENTINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDRECORDCOMPONENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BoundRecordComponentInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BoundRecordComponentInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BoundRecordComponentInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::attribute::RecordComponentInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDRECORDCOMPONENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDRECORDCOMPONENTINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDRECORDCOMPONENTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassReader.h>
#include <scapix/java_api/java/lang/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BoundRecordComponentInfo : public jni::object_base<"jdk/internal/classfile/impl/BoundRecordComponentInfo",
	java::lang::Object,
	java::lang::classfile::attribute::RecordComponentInfo>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BoundRecordComponentInfo> new_object(jni::ref<java::lang::classfile::ClassReader> reader, jint startPos) { return base_::new_object(reader, startPos); }
	jni::ref<java::lang::classfile::constantpool::Utf8Entry> name() { return call_method<"name", jni::ref<java::lang::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::lang::classfile::constantpool::Utf8Entry> descriptor() { return call_method<"descriptor", jni::ref<java::lang::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::util::List> attributes() { return call_method<"attributes", jni::ref<java::util::List>>(); }

protected:

	BoundRecordComponentInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDRECORDCOMPONENTINFO