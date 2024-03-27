// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/WritableElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class AnnotationValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::AnnotationValue>
{
	static constexpr fixed_string class_name = "java/lang/classfile/AnnotationValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::WritableElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/Annotation.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfAnnotation.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfArray.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfClass.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfConstant.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfEnum.h>
#include <scapix/java_api/java/lang/classfile/constantpool/DoubleEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/FloatEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/IntegerEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/LongEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfBoolean.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfByte.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfCharacter.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfShort.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfInteger.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfLong.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfFloat.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfDouble.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfString.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::AnnotationValue : public jni::object_base<"java/lang/classfile/AnnotationValue",
	java::lang::Object,
	java::lang::classfile::WritableElement>
{
public:

	using OfEnum = AnnotationValue_OfEnum;
	using OfClass = AnnotationValue_OfClass;
	using OfConstant = AnnotationValue_OfConstant;
	using OfArray = AnnotationValue_OfArray;
	using OfBoolean = AnnotationValue_OfBoolean;
	using OfByte = AnnotationValue_OfByte;
	using OfCharacter = AnnotationValue_OfCharacter;
	using OfShort = AnnotationValue_OfShort;
	using OfInteger = AnnotationValue_OfInteger;
	using OfLong = AnnotationValue_OfLong;
	using OfFloat = AnnotationValue_OfFloat;
	using OfDouble = AnnotationValue_OfDouble;
	using OfString = AnnotationValue_OfString;
	using OfAnnotation = AnnotationValue_OfAnnotation;

	jchar tag() { return call_method<"tag", jchar>(); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfEnum> ofEnum(jni::ref<java::lang::classfile::constantpool::Utf8Entry> className, jni::ref<java::lang::classfile::constantpool::Utf8Entry> constantName) { return call_static_method<"ofEnum", jni::ref<java::lang::classfile::AnnotationValue_OfEnum>>(className, constantName); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfEnum> ofEnum(jni::ref<java::lang::constant::ClassDesc> className, jni::ref<java::lang::String> constantName) { return call_static_method<"ofEnum", jni::ref<java::lang::classfile::AnnotationValue_OfEnum>>(className, constantName); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfClass> ofClass(jni::ref<java::lang::classfile::constantpool::Utf8Entry> className) { return call_static_method<"ofClass", jni::ref<java::lang::classfile::AnnotationValue_OfClass>>(className); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfClass> ofClass(jni::ref<java::lang::constant::ClassDesc> className) { return call_static_method<"ofClass", jni::ref<java::lang::classfile::AnnotationValue_OfClass>>(className); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofString(jni::ref<java::lang::classfile::constantpool::Utf8Entry> value) { return call_static_method<"ofString", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofString(jni::ref<java::lang::String> value) { return call_static_method<"ofString", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofDouble(jni::ref<java::lang::classfile::constantpool::DoubleEntry> value) { return call_static_method<"ofDouble", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofDouble(jdouble value) { return call_static_method<"ofDouble", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofFloat(jni::ref<java::lang::classfile::constantpool::FloatEntry> value) { return call_static_method<"ofFloat", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofFloat(jfloat value) { return call_static_method<"ofFloat", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofLong(jni::ref<java::lang::classfile::constantpool::LongEntry> value) { return call_static_method<"ofLong", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofLong(jlong value) { return call_static_method<"ofLong", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofInt(jni::ref<java::lang::classfile::constantpool::IntegerEntry> value) { return call_static_method<"ofInt", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofInt(jint value) { return call_static_method<"ofInt", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofShort(jni::ref<java::lang::classfile::constantpool::IntegerEntry> value) { return call_static_method<"ofShort", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofShort(jshort value) { return call_static_method<"ofShort", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofChar(jni::ref<java::lang::classfile::constantpool::IntegerEntry> value) { return call_static_method<"ofChar", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofChar(jchar value) { return call_static_method<"ofChar", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofByte(jni::ref<java::lang::classfile::constantpool::IntegerEntry> value) { return call_static_method<"ofByte", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofByte(jbyte value) { return call_static_method<"ofByte", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofBoolean(jni::ref<java::lang::classfile::constantpool::IntegerEntry> value) { return call_static_method<"ofBoolean", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfConstant> ofBoolean(jboolean value) { return call_static_method<"ofBoolean", jni::ref<java::lang::classfile::AnnotationValue_OfConstant>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfAnnotation> ofAnnotation(jni::ref<java::lang::classfile::Annotation> value) { return call_static_method<"ofAnnotation", jni::ref<java::lang::classfile::AnnotationValue_OfAnnotation>>(value); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfArray> ofArray(jni::ref<java::util::List> values) { return call_static_method<"ofArray", jni::ref<java::lang::classfile::AnnotationValue_OfArray>>(values); }
	static jni::ref<java::lang::classfile::AnnotationValue_OfArray> ofArray(jni::ref<jni::array<java::lang::classfile::AnnotationValue>> values) { return call_static_method<"ofArray", jni::ref<java::lang::classfile::AnnotationValue_OfArray>>(values); }
	static jni::ref<java::lang::classfile::AnnotationValue> of(jni::ref<java::lang::Object> value) { return call_static_method<"of", jni::ref<java::lang::classfile::AnnotationValue>>(value); }

protected:

	AnnotationValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE
