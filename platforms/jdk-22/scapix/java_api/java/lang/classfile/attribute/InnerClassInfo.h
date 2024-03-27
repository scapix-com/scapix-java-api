// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSINFO_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class InnerClassInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::InnerClassInfo>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/InnerClassInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSINFO)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/lang/reflect/AccessFlag.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::InnerClassInfo : public jni::object_base<"java/lang/classfile/attribute/InnerClassInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::classfile::constantpool::ClassEntry> innerClass() { return call_method<"innerClass", jni::ref<java::lang::classfile::constantpool::ClassEntry>>(); }
	jni::ref<java::util::Optional> outerClass() { return call_method<"outerClass", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::Optional> innerName() { return call_method<"innerName", jni::ref<java::util::Optional>>(); }
	jint flagsMask() { return call_method<"flagsMask", jint>(); }
	jni::ref<java::util::Set> flags() { return call_method<"flags", jni::ref<java::util::Set>>(); }
	jboolean has(jni::ref<java::lang::reflect::AccessFlag> flag) { return call_method<"has", jboolean>(flag); }
	static jni::ref<java::lang::classfile::attribute::InnerClassInfo> of(jni::ref<java::lang::classfile::constantpool::ClassEntry> innerClass, jni::ref<java::util::Optional> outerClass, jni::ref<java::util::Optional> innerName, jint flags) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::InnerClassInfo>>(innerClass, outerClass, innerName, flags); }
	static jni::ref<java::lang::classfile::attribute::InnerClassInfo> of(jni::ref<java::lang::constant::ClassDesc> innerClass, jni::ref<java::util::Optional> outerClass, jni::ref<java::util::Optional> innerName, jint flags) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::InnerClassInfo>>(innerClass, outerClass, innerName, flags); }
	static jni::ref<java::lang::classfile::attribute::InnerClassInfo> of(jni::ref<java::lang::constant::ClassDesc> innerClass, jni::ref<java::util::Optional> outerClass, jni::ref<java::util::Optional> innerName, jni::ref<jni::array<java::lang::reflect::AccessFlag>> flags) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::InnerClassInfo>>(innerClass, outerClass, innerName, flags); }

protected:

	InnerClassInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_INNERCLASSINFO
