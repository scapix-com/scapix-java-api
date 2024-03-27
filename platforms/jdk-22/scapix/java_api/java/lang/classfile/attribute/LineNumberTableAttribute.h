// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_LINENUMBERTABLEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_LINENUMBERTABLEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class LineNumberTableAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::LineNumberTableAttribute>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/LineNumberTableAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_LINENUMBERTABLEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_LINENUMBERTABLEATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_LINENUMBERTABLEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::LineNumberTableAttribute : public jni::object_base<"java/lang/classfile/attribute/LineNumberTableAttribute",
	java::lang::Object,
	java::lang::classfile::Attribute>
{
public:

	jni::ref<java::util::List> lineNumbers() { return call_method<"lineNumbers", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::classfile::attribute::LineNumberTableAttribute> of(jni::ref<java::util::List> lines) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::LineNumberTableAttribute>>(lines); }

protected:

	LineNumberTableAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_LINENUMBERTABLEATTRIBUTE
