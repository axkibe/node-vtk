/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSplineFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSplineWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSplineFilterWrap::ptpl;

VtkSplineFilterWrap::VtkSplineFilterWrap()
{ }

VtkSplineFilterWrap::VtkSplineFilterWrap(vtkSmartPointer<vtkSplineFilter> _native)
{ native = _native; }

VtkSplineFilterWrap::~VtkSplineFilterWrap()
{ }

void VtkSplineFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSplineFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SplineFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkSplineFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSplineFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSplineFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoords", GetGenerateTCoords);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoords", GetGenerateTCoords);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoordsAsString", GetGenerateTCoordsAsString);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoordsAsString", GetGenerateTCoordsAsString);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoordsMaxValue", GetGenerateTCoordsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoordsMaxValue", GetGenerateTCoordsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTCoordsMinValue", GetGenerateTCoordsMinValue);
	Nan::SetPrototypeMethod(tpl, "getGenerateTCoordsMinValue", GetGenerateTCoordsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLength", GetLength);
	Nan::SetPrototypeMethod(tpl, "getLength", GetLength);

	Nan::SetPrototypeMethod(tpl, "GetLengthMaxValue", GetLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLengthMaxValue", GetLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLengthMinValue", GetLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getLengthMinValue", GetLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfSubdivisions", GetMaximumNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfSubdivisions", GetMaximumNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfSubdivisionsMaxValue", GetMaximumNumberOfSubdivisionsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfSubdivisionsMaxValue", GetMaximumNumberOfSubdivisionsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfSubdivisionsMinValue", GetMaximumNumberOfSubdivisionsMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfSubdivisionsMinValue", GetMaximumNumberOfSubdivisionsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubdivisions", GetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubdivisions", GetNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubdivisionsMaxValue", GetNumberOfSubdivisionsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubdivisionsMaxValue", GetNumberOfSubdivisionsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubdivisionsMinValue", GetNumberOfSubdivisionsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubdivisionsMinValue", GetNumberOfSubdivisionsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSpline", GetSpline);
	Nan::SetPrototypeMethod(tpl, "getSpline", GetSpline);

	Nan::SetPrototypeMethod(tpl, "GetSubdivide", GetSubdivide);
	Nan::SetPrototypeMethod(tpl, "getSubdivide", GetSubdivide);

	Nan::SetPrototypeMethod(tpl, "GetSubdivideAsString", GetSubdivideAsString);
	Nan::SetPrototypeMethod(tpl, "getSubdivideAsString", GetSubdivideAsString);

	Nan::SetPrototypeMethod(tpl, "GetSubdivideMaxValue", GetSubdivideMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSubdivideMaxValue", GetSubdivideMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSubdivideMinValue", GetSubdivideMinValue);
	Nan::SetPrototypeMethod(tpl, "getSubdivideMinValue", GetSubdivideMinValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureLength", GetTextureLength);
	Nan::SetPrototypeMethod(tpl, "getTextureLength", GetTextureLength);

	Nan::SetPrototypeMethod(tpl, "GetTextureLengthMaxValue", GetTextureLengthMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextureLengthMaxValue", GetTextureLengthMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextureLengthMinValue", GetTextureLengthMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextureLengthMinValue", GetTextureLengthMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoords", SetGenerateTCoords);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoords", SetGenerateTCoords);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToNormalizedLength", SetGenerateTCoordsToNormalizedLength);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToNormalizedLength", SetGenerateTCoordsToNormalizedLength);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToOff", SetGenerateTCoordsToOff);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToOff", SetGenerateTCoordsToOff);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToUseLength", SetGenerateTCoordsToUseLength);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToUseLength", SetGenerateTCoordsToUseLength);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTCoordsToUseScalars", SetGenerateTCoordsToUseScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateTCoordsToUseScalars", SetGenerateTCoordsToUseScalars);

	Nan::SetPrototypeMethod(tpl, "SetLength", SetLength);
	Nan::SetPrototypeMethod(tpl, "setLength", SetLength);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfSubdivisions", SetMaximumNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfSubdivisions", SetMaximumNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSubdivisions", SetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSubdivisions", SetNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "SetSpline", SetSpline);
	Nan::SetPrototypeMethod(tpl, "setSpline", SetSpline);

	Nan::SetPrototypeMethod(tpl, "SetSubdivide", SetSubdivide);
	Nan::SetPrototypeMethod(tpl, "setSubdivide", SetSubdivide);

	Nan::SetPrototypeMethod(tpl, "SetSubdivideToLength", SetSubdivideToLength);
	Nan::SetPrototypeMethod(tpl, "setSubdivideToLength", SetSubdivideToLength);

	Nan::SetPrototypeMethod(tpl, "SetSubdivideToSpecified", SetSubdivideToSpecified);
	Nan::SetPrototypeMethod(tpl, "setSubdivideToSpecified", SetSubdivideToSpecified);

	Nan::SetPrototypeMethod(tpl, "SetTextureLength", SetTextureLength);
	Nan::SetPrototypeMethod(tpl, "setTextureLength", SetTextureLength);

#ifdef VTK_NODE_PLUS_VTKSPLINEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSPLINEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSplineFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSplineFilter> native = vtkSmartPointer<vtkSplineFilter>::New();
		VtkSplineFilterWrap* obj = new VtkSplineFilterWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSplineFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplineFilterWrap::GetGenerateTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoords();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetGenerateTCoordsAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplineFilterWrap::GetGenerateTCoordsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetGenerateTCoordsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTCoordsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfSubdivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetMaximumNumberOfSubdivisionsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfSubdivisionsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetMaximumNumberOfSubdivisionsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfSubdivisionsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSubdivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetNumberOfSubdivisionsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSubdivisionsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetNumberOfSubdivisionsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSubdivisionsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	vtkSpline * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpline();
	VtkSplineWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineWrap *w = new VtkSplineWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineFilterWrap::GetSubdivide(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivide();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetSubdivideAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivideAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSplineFilterWrap::GetSubdivideMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivideMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetSubdivideMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivideMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetTextureLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetTextureLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLengthMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::GetTextureLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureLengthMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSplineFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	vtkSplineFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSplineFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSplineFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSplineFilterWrap *w = new VtkSplineFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSplineFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSplineFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSplineFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSplineFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSplineFilterWrap *w = new VtkSplineFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::SetGenerateTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateTCoords(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::SetGenerateTCoordsToNormalizedLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToNormalizedLength();
}

void VtkSplineFilterWrap::SetGenerateTCoordsToOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToOff();
}

void VtkSplineFilterWrap::SetGenerateTCoordsToUseLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToUseLength();
}

void VtkSplineFilterWrap::SetGenerateTCoordsToUseScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGenerateTCoordsToUseScalars();
}

void VtkSplineFilterWrap::SetLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::SetMaximumNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfSubdivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::SetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSubdivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::SetSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSplineWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSplineWrap *a0 = ObjectWrap::Unwrap<VtkSplineWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpline(
			(vtkSpline *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::SetSubdivide(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubdivide(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSplineFilterWrap::SetSubdivideToLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSubdivideToLength();
}

void VtkSplineFilterWrap::SetSubdivideToSpecified(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSubdivideToSpecified();
}

void VtkSplineFilterWrap::SetTextureLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSplineFilterWrap *wrapper = ObjectWrap::Unwrap<VtkSplineFilterWrap>(info.Holder());
	vtkSplineFilter *native = (vtkSplineFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureLength(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

