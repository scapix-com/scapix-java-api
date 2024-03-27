// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Attribute.h>
#include <scapix/java_api/jdk/internal/classfile/ClassElement.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class ModuleAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::ModuleAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/ModuleAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Attribute, scapix::java_api::jdk::internal::classfile::ClassElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/ModuleDesc.h>
#include <scapix/java_api/java/lang/reflect/AccessFlag.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ModuleEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ModuleAttribute_ModuleAttributeBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::ModuleAttribute : public jni::object_base<"jdk/internal/classfile/attribute/ModuleAttribute",
	java::lang::Object,
	jdk::internal::classfile::Attribute,
	jdk::internal::classfile::ClassElement>
{
public:

	using ModuleAttributeBuilder = ModuleAttribute_ModuleAttributeBuilder;

	jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> moduleName() { return call_method<"moduleName", jni::ref<jdk::internal::classfile::constantpool::ModuleEntry>>(); }
	jint moduleFlagsMask() { return call_method<"moduleFlagsMask", jint>(); }
	jni::ref<java::util::Set> moduleFlags() { return call_method<"moduleFlags", jni::ref<java::util::Set>>(); }
	jboolean has(jni::ref<java::lang::reflect::AccessFlag> flag) { return call_method<"has", jboolean>(flag); }
	jni::ref<java::util::Optional> moduleVersion() { return call_method<"moduleVersion", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::List> requires_() { return call_method<"requires", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> exports() { return call_method<"exports", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> opens() { return call_method<"opens", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> uses() { return call_method<"uses", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> provides() { return call_method<"provides", jni::ref<java::util::List>>(); }
	static jni::ref<jdk::internal::classfile::attribute::ModuleAttribute> of(jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> moduleName, jint moduleFlags, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> moduleVersion, jni::ref<java::util::Collection> requires_, jni::ref<java::util::Collection> exports, jni::ref<java::util::Collection> opens, jni::ref<java::util::Collection> uses, jni::ref<java::util::Collection> provides) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute>>(moduleName, moduleFlags, moduleVersion, requires_, exports, opens, uses, provides); }
	static jni::ref<jdk::internal::classfile::attribute::ModuleAttribute> of(jni::ref<java::lang::constant::ModuleDesc> moduleName, jni::ref<java::util::function::Consumer> attrHandler) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute>>(moduleName, attrHandler); }
	static jni::ref<jdk::internal::classfile::attribute::ModuleAttribute> of(jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> moduleName, jni::ref<java::util::function::Consumer> attrHandler) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::ModuleAttribute>>(moduleName, attrHandler); }

protected:

	ModuleAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_MODULEATTRIBUTE