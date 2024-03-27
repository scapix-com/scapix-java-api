// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/classfile/attribute/CharacterRangeInfo.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDCHARACTERRANGEINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDCHARACTERRANGEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_UnboundCharacterRangeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_UnboundCharacterRangeInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$UnboundCharacterRangeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::classfile::attribute::CharacterRangeInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDCHARACTERRANGEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDCHARACTERRANGEINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDCHARACTERRANGEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_UnboundCharacterRangeInfo : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$UnboundCharacterRangeInfo",
	java::lang::Record,
	java::lang::classfile::attribute::CharacterRangeInfo>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_UnboundCharacterRangeInfo> new_object(jint startPc, jint endPc, jint characterRangeStart, jint characterRangeEnd, jint flags) { return base_::new_object(startPc, endPc, characterRangeStart, characterRangeEnd, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint startPc() { return call_method<"startPc", jint>(); }
	jint endPc() { return call_method<"endPc", jint>(); }
	jint characterRangeStart() { return call_method<"characterRangeStart", jint>(); }
	jint characterRangeEnd() { return call_method<"characterRangeEnd", jint>(); }
	jint flags() { return call_method<"flags", jint>(); }

protected:

	UnboundAttribute_UnboundCharacterRangeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDCHARACTERRANGEINFO
