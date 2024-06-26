// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/bind/annotation/adapters/XmlAdapter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_ADAPTERS_NORMALIZEDSTRINGADAPTER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_ADAPTERS_NORMALIZEDSTRINGADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::annotation::adapters { class NormalizedStringAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::annotation::adapters::NormalizedStringAdapter>
{
	static constexpr fixed_string class_name = "javax/xml/bind/annotation/adapters/NormalizedStringAdapter";
	using base_classes = std::tuple<scapix::java_api::javax::xml::bind::annotation::adapters::XmlAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_ADAPTERS_NORMALIZEDSTRINGADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_ADAPTERS_NORMALIZEDSTRINGADAPTER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_ADAPTERS_NORMALIZEDSTRINGADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::annotation::adapters::NormalizedStringAdapter : public jni::object_base<"javax/xml/bind/annotation/adapters/NormalizedStringAdapter",
	javax::xml::bind::annotation::adapters::XmlAdapter>
{
public:

	static jni::ref<javax::xml::bind::annotation::adapters::NormalizedStringAdapter> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> unmarshal(jni::ref<java::lang::String> p1) { return call_method<"unmarshal", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> marshal(jni::ref<java::lang::String> p1) { return call_method<"marshal", jni::ref<java::lang::String>>(p1); }

protected:

	NormalizedStringAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_ADAPTERS_NORMALIZEDSTRINGADAPTER
