// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_JSRINLINERADAPTER_INSTANTIATION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_JSRINLINERADAPTER_INSTANTIATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::commons { class JSRInlinerAdapter_Instantiation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::JSRInlinerAdapter_Instantiation>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter$Instantiation";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_JSRINLINERADAPTER_INSTANTIATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_JSRINLINERADAPTER_INSTANTIATION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_JSRINLINERADAPTER_INSTANTIATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/BitSet.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::org::objectweb::asm_::commons::JSRInlinerAdapter_Instantiation : public jni::object_base<"jdk/internal/org/objectweb/asm/commons/JSRInlinerAdapter$Instantiation",
	java::util::AbstractMap>
{
public:

	jni::ref<java::util::BitSet> subroutine() { return get_field<"subroutine", jni::ref<java::util::BitSet>>(); }
	jni::ref<java::util::Map> rangeTable() { return get_field<"rangeTable", jni::ref<java::util::Map>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> returnLabel() { return get_field<"returnLabel", jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode>>(); }

	jni::ref<jdk::internal::org::objectweb::asm_::commons::JSRInlinerAdapter_Instantiation> findOwner(jint i) { return call_method<"findOwner", jni::ref<jdk::internal::org::objectweb::asm_::commons::JSRInlinerAdapter_Instantiation>>(i); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> gotoLabel(jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> l) { return call_method<"gotoLabel", jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode>>(l); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> rangeLabel(jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> l) { return call_method<"rangeLabel", jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode>>(l); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> get(jni::ref<java::lang::Object> o) { return call_method<"get", jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode>>(o); }

protected:

	JSRInlinerAdapter_Instantiation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_JSRINLINERADAPTER_INSTANTIATION
