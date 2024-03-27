// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONSTANTS_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::datatype { class DatatypeConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::datatype::DatatypeConstants>
{
	static constexpr fixed_string class_name = "javax/xml/datatype/DatatypeConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONSTANTS)
#define SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONSTANTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/xml/datatype/DatatypeConstants_Field.h>
#include <scapix/java_api/javax/xml/namespace/QName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::datatype::DatatypeConstants : public jni::object_base<"javax/xml/datatype/DatatypeConstants",
	java::lang::Object>
{
public:

	using Field = DatatypeConstants_Field;

	static jint APRIL() { return get_static_field<"APRIL", jint>(); }
	static jint AUGUST() { return get_static_field<"AUGUST", jint>(); }
	static jni::ref<javax::xml::namespace_::QName> DATE() { return get_static_field<"DATE", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::namespace_::QName> DATETIME() { return get_static_field<"DATETIME", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::datatype::DatatypeConstants_Field> DAYS() { return get_static_field<"DAYS", jni::ref<javax::xml::datatype::DatatypeConstants_Field>>(); }
	static jint DECEMBER() { return get_static_field<"DECEMBER", jint>(); }
	static jni::ref<javax::xml::namespace_::QName> DURATION() { return get_static_field<"DURATION", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::namespace_::QName> DURATION_DAYTIME() { return get_static_field<"DURATION_DAYTIME", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::namespace_::QName> DURATION_YEARMONTH() { return get_static_field<"DURATION_YEARMONTH", jni::ref<javax::xml::namespace_::QName>>(); }
	static jint EQUAL() { return get_static_field<"EQUAL", jint>(); }
	static jint FEBRUARY() { return get_static_field<"FEBRUARY", jint>(); }
	static jint FIELD_UNDEFINED() { return get_static_field<"FIELD_UNDEFINED", jint>(); }
	static jni::ref<javax::xml::namespace_::QName> GDAY() { return get_static_field<"GDAY", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::namespace_::QName> GMONTH() { return get_static_field<"GMONTH", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::namespace_::QName> GMONTHDAY() { return get_static_field<"GMONTHDAY", jni::ref<javax::xml::namespace_::QName>>(); }
	static jint GREATER() { return get_static_field<"GREATER", jint>(); }
	static jni::ref<javax::xml::namespace_::QName> GYEAR() { return get_static_field<"GYEAR", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::namespace_::QName> GYEARMONTH() { return get_static_field<"GYEARMONTH", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::datatype::DatatypeConstants_Field> HOURS() { return get_static_field<"HOURS", jni::ref<javax::xml::datatype::DatatypeConstants_Field>>(); }
	static jint INDETERMINATE() { return get_static_field<"INDETERMINATE", jint>(); }
	static jint JANUARY() { return get_static_field<"JANUARY", jint>(); }
	static jint JULY() { return get_static_field<"JULY", jint>(); }
	static jint JUNE() { return get_static_field<"JUNE", jint>(); }
	static jint LESSER() { return get_static_field<"LESSER", jint>(); }
	static jint MARCH() { return get_static_field<"MARCH", jint>(); }
	static jint MAX_TIMEZONE_OFFSET() { return get_static_field<"MAX_TIMEZONE_OFFSET", jint>(); }
	static jint MAY() { return get_static_field<"MAY", jint>(); }
	static jni::ref<javax::xml::datatype::DatatypeConstants_Field> MINUTES() { return get_static_field<"MINUTES", jni::ref<javax::xml::datatype::DatatypeConstants_Field>>(); }
	static jint MIN_TIMEZONE_OFFSET() { return get_static_field<"MIN_TIMEZONE_OFFSET", jint>(); }
	static jni::ref<javax::xml::datatype::DatatypeConstants_Field> MONTHS() { return get_static_field<"MONTHS", jni::ref<javax::xml::datatype::DatatypeConstants_Field>>(); }
	static jint NOVEMBER() { return get_static_field<"NOVEMBER", jint>(); }
	static jint OCTOBER() { return get_static_field<"OCTOBER", jint>(); }
	static jni::ref<javax::xml::datatype::DatatypeConstants_Field> SECONDS() { return get_static_field<"SECONDS", jni::ref<javax::xml::datatype::DatatypeConstants_Field>>(); }
	static jint SEPTEMBER() { return get_static_field<"SEPTEMBER", jint>(); }
	static jni::ref<javax::xml::namespace_::QName> TIME() { return get_static_field<"TIME", jni::ref<javax::xml::namespace_::QName>>(); }
	static jni::ref<javax::xml::datatype::DatatypeConstants_Field> YEARS() { return get_static_field<"YEARS", jni::ref<javax::xml::datatype::DatatypeConstants_Field>>(); }


protected:

	DatatypeConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONSTANTS
