// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSValue.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_VALIDATEDINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_VALIDATEDINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv { class ValidatedInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_VALIDATEDINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_VALIDATEDINFO)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_VALIDATEDINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::XSValue>
{
public:

	jni::ref<java::lang::String> normalizedValue() { return get_field<"normalizedValue", jni::ref<java::lang::String>>(); }
	void normalizedValue(jni::ref<java::lang::String> v) { set_field<"normalizedValue", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::Object> actualValue() { return get_field<"actualValue", jni::ref<java::lang::Object>>(); }
	void actualValue(jni::ref<java::lang::Object> v) { set_field<"actualValue", jni::ref<java::lang::Object>>(v); }
	jshort actualValueType() { return get_field<"actualValueType", jshort>(); }
	void actualValueType(jshort v) { set_field<"actualValueType", jshort>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> actualType() { return get_field<"actualType", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(); }
	void actualType(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> v) { set_field<"actualType", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> memberType() { return get_field<"memberType", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(); }
	void memberType(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType> v) { set_field<"memberType", jni::ref<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>(v); }
	jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>> memberTypes() { return get_field<"memberTypes", jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>>(); }
	void memberTypes(jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>> v) { set_field<"memberTypes", jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList> itemValueTypes() { return get_field<"itemValueTypes", jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList>>(); }
	void itemValueTypes(jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList> v) { set_field<"itemValueTypes", jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList>>(v); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo> new_object() { return base_::new_object(); }
	void reset() { return call_method<"reset", void>(); }
	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }
	static jboolean isComparable(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo> p2) { return call_static_method<"isComparable", jboolean>(p1, p2); }
	jni::ref<java::lang::Object> getActualValue() { return call_method<"getActualValue", jni::ref<java::lang::Object>>(); }
	jshort getActualValueType() { return call_method<"getActualValueType", jshort>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList> getListValueTypes() { return call_method<"getListValueTypes", jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getMemberTypeDefinitions() { return call_method<"getMemberTypeDefinitions", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	jni::ref<java::lang::String> getNormalizedValue() { return call_method<"getNormalizedValue", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition> getTypeDefinition() { return call_method<"getTypeDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition> getMemberTypeDefinition() { return call_method<"getMemberTypeDefinition", jni::ref<com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition>>(); }
	void copyFrom(jni::ref<com::sun::org::apache::xerces::internal::xs::XSValue> p1) { return call_method<"copyFrom", void>(p1); }

protected:

	ValidatedInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_VALIDATEDINFO
