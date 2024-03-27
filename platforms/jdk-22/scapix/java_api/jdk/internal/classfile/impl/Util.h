// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UTIL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class Util; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::Util>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/Util";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UTIL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>
#include <scapix/java_api/java/lang/classfile/ClassFile_AttributesProcessingOption.h>
#include <scapix/java_api/java/lang/classfile/Opcode.h>
#include <scapix/java_api/java/lang/classfile/Opcode_Kind.h>
#include <scapix/java_api/java/lang/classfile/constantpool/NameAndTypeEntry.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#include <scapix/java_api/java/lang/reflect/AccessFlag.h>
#include <scapix/java_api/java/lang/reflect/AccessFlag_Location.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::Util : public jni::object_base<"jdk/internal/classfile/impl/Util",
	java::lang::Object>
{
public:

	static jboolean isAttributeAllowed(jni::ref<java::lang::classfile::Attribute> attr, jni::ref<java::lang::classfile::ClassFile_AttributesProcessingOption> processingOption) { return call_static_method<"isAttributeAllowed", jboolean>(attr, processingOption); }
	static jint parameterSlots(jni::ref<java::lang::constant::MethodTypeDesc> mDesc) { return call_static_method<"parameterSlots", jint>(mDesc); }
	static jni::ref<jni::array<jint>> parseParameterSlots(jint flags, jni::ref<java::lang::constant::MethodTypeDesc> mDesc) { return call_static_method<"parseParameterSlots", jni::ref<jni::array<jint>>>(flags, mDesc); }
	static jint maxLocals(jint flags, jni::ref<java::lang::constant::MethodTypeDesc> mDesc) { return call_static_method<"maxLocals", jint>(flags, mDesc); }
	static jni::ref<java::lang::String> toBinaryName(jni::ref<java::lang::constant::ClassDesc> cd) { return call_static_method<"toBinaryName", jni::ref<java::lang::String>>(cd); }
	static jni::ref<java::lang::String> toInternalName(jni::ref<java::lang::constant::ClassDesc> cd) { return call_static_method<"toInternalName", jni::ref<java::lang::String>>(cd); }
	static jni::ref<java::lang::constant::ClassDesc> toClassDesc(jni::ref<java::lang::String> classInternalNameOrArrayDesc) { return call_static_method<"toClassDesc", jni::ref<java::lang::constant::ClassDesc>>(classInternalNameOrArrayDesc); }
	static jni::ref<java::util::List> mappedList(jni::ref<java::util::List> list, jni::ref<java::util::function::Function> mapper) { return call_static_method<"mappedList", jni::ref<java::util::List>>(list, mapper); }
	static jni::ref<java::util::List> entryList(jni::ref<java::util::List> list) { return call_static_method<"entryList", jni::ref<java::util::List>>(list); }
	static jni::ref<java::util::List> moduleEntryList(jni::ref<java::util::List> list) { return call_static_method<"moduleEntryList", jni::ref<java::util::List>>(list); }
	static void checkKind(jni::ref<java::lang::classfile::Opcode> op, jni::ref<java::lang::classfile::Opcode_Kind> k) { return call_static_method<"checkKind", void>(op, k); }
	static jint flagsToBits(jni::ref<java::lang::reflect::AccessFlag_Location> location, jni::ref<java::util::Collection> flags) { return call_static_method<"flagsToBits", jint>(location, flags); }
	static jint flagsToBits(jni::ref<java::lang::reflect::AccessFlag_Location> location, jni::ref<jni::array<java::lang::reflect::AccessFlag>> flags) { return call_static_method<"flagsToBits", jint>(location, flags); }
	static jboolean has(jni::ref<java::lang::reflect::AccessFlag_Location> location, jint flagsMask, jni::ref<java::lang::reflect::AccessFlag> flag) { return call_static_method<"has", jboolean>(location, flagsMask, flag); }
	static jni::ref<java::lang::constant::ClassDesc> fieldTypeSymbol(jni::ref<java::lang::classfile::constantpool::NameAndTypeEntry> nat) { return call_static_method<"fieldTypeSymbol", jni::ref<java::lang::constant::ClassDesc>>(nat); }
	static jni::ref<java::lang::constant::MethodTypeDesc> methodTypeSymbol(jni::ref<java::lang::classfile::constantpool::NameAndTypeEntry> nat) { return call_static_method<"methodTypeSymbol", jni::ref<java::lang::constant::MethodTypeDesc>>(nat); }
	static jint slotSize(jni::ref<java::lang::constant::ClassDesc> desc) { return call_static_method<"slotSize", jint>(desc); }
	static jboolean isDoubleSlot(jni::ref<java::lang::constant::ClassDesc> desc) { return call_static_method<"isDoubleSlot", jboolean>(desc); }

protected:

	Util(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UTIL
