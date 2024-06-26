// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_UnboundInstruction.h>
#include <scapix/java_api/java/lang/classfile/instruction/LookupSwitchInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDLOOKUPSWITCHINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDLOOKUPSWITCHINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_UnboundLookupSwitchInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundLookupSwitchInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$UnboundLookupSwitchInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction, scapix::java_api::java::lang::classfile::instruction::LookupSwitchInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDLOOKUPSWITCHINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDLOOKUPSWITCHINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDLOOKUPSWITCHINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/Label.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectCodeBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_UnboundLookupSwitchInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$UnboundLookupSwitchInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction,
	java::lang::classfile::instruction::LookupSwitchInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_UnboundLookupSwitchInstruction> new_object(jni::ref<java::lang::classfile::Label> defaultTarget, jni::ref<java::util::List> cases) { return base_::new_object(defaultTarget, cases); }
	jni::ref<java::util::List> cases() { return call_method<"cases", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::classfile::Label> defaultTarget() { return call_method<"defaultTarget", jni::ref<java::lang::classfile::Label>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder> writer) { return call_method<"writeTo", void>(writer); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractInstruction_UnboundLookupSwitchInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDLOOKUPSWITCHINSTRUCTION
