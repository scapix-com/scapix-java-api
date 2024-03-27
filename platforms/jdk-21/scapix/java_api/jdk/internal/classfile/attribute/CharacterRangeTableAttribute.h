// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Attribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CHARACTERRANGETABLEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CHARACTERRANGETABLEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class CharacterRangeTableAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::CharacterRangeTableAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/CharacterRangeTableAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CHARACTERRANGETABLEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CHARACTERRANGETABLEATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CHARACTERRANGETABLEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::CharacterRangeTableAttribute : public jni::object_base<"jdk/internal/classfile/attribute/CharacterRangeTableAttribute",
	java::lang::Object,
	jdk::internal::classfile::Attribute>
{
public:

	jni::ref<java::util::List> characterRangeTable() { return call_method<"characterRangeTable", jni::ref<java::util::List>>(); }
	static jni::ref<jdk::internal::classfile::attribute::CharacterRangeTableAttribute> of(jni::ref<java::util::List> ranges) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::CharacterRangeTableAttribute>>(ranges); }

protected:

	CharacterRangeTableAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_CHARACTERRANGETABLEATTRIBUTE
