/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkPlatonicSolidSourceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlatonicSolidSourceWrap::ptpl;

VtkPlatonicSolidSourceWrap::VtkPlatonicSolidSourceWrap()
{ }

VtkPlatonicSolidSourceWrap::VtkPlatonicSolidSourceWrap(vtkSmartPointer<vtkPlatonicSolidSource> _native)
{ native = _native; }

VtkPlatonicSolidSourceWrap::~VtkPlatonicSolidSourceWrap()
{ }

void VtkPlatonicSolidSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlatonicSolidSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlatonicSolidSource").ToLocalChecked(), ConstructorGetter);
}

void VtkPlatonicSolidSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlatonicSolidSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlatonicSolidSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetSolidType", GetSolidType);
	Nan::SetPrototypeMethod(tpl, "getSolidType", GetSolidType);

	Nan::SetPrototypeMethod(tpl, "GetSolidTypeMaxValue", GetSolidTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSolidTypeMaxValue", GetSolidTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSolidTypeMinValue", GetSolidTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSolidTypeMinValue", GetSolidTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetSolidType", SetSolidType);
	Nan::SetPrototypeMethod(tpl, "setSolidType", SetSolidType);

	Nan::SetPrototypeMethod(tpl, "SetSolidTypeToCube", SetSolidTypeToCube);
	Nan::SetPrototypeMethod(tpl, "setSolidTypeToCube", SetSolidTypeToCube);

	Nan::SetPrototypeMethod(tpl, "SetSolidTypeToDodecahedron", SetSolidTypeToDodecahedron);
	Nan::SetPrototypeMethod(tpl, "setSolidTypeToDodecahedron", SetSolidTypeToDodecahedron);

	Nan::SetPrototypeMethod(tpl, "SetSolidTypeToIcosahedron", SetSolidTypeToIcosahedron);
	Nan::SetPrototypeMethod(tpl, "setSolidTypeToIcosahedron", SetSolidTypeToIcosahedron);

	Nan::SetPrototypeMethod(tpl, "SetSolidTypeToOctahedron", SetSolidTypeToOctahedron);
	Nan::SetPrototypeMethod(tpl, "setSolidTypeToOctahedron", SetSolidTypeToOctahedron);

	Nan::SetPrototypeMethod(tpl, "SetSolidTypeToTetrahedron", SetSolidTypeToTetrahedron);
	Nan::SetPrototypeMethod(tpl, "setSolidTypeToTetrahedron", SetSolidTypeToTetrahedron);

#ifdef VTK_NODE_PLUS_VTKPLATONICSOLIDSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPLATONICSOLIDSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPlatonicSolidSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlatonicSolidSource> native = vtkSmartPointer<vtkPlatonicSolidSource>::New();
		VtkPlatonicSolidSourceWrap* obj = new VtkPlatonicSolidSourceWrap(native);
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

void VtkPlatonicSolidSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlatonicSolidSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlatonicSolidSourceWrap::GetSolidType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSolidType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlatonicSolidSourceWrap::GetSolidTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSolidTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlatonicSolidSourceWrap::GetSolidTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSolidTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPlatonicSolidSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
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

void VtkPlatonicSolidSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	vtkPlatonicSolidSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPlatonicSolidSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlatonicSolidSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlatonicSolidSourceWrap *w = new VtkPlatonicSolidSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlatonicSolidSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlatonicSolidSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPlatonicSolidSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlatonicSolidSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlatonicSolidSourceWrap *w = new VtkPlatonicSolidSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlatonicSolidSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlatonicSolidSourceWrap::SetSolidType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSolidType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlatonicSolidSourceWrap::SetSolidTypeToCube(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSolidTypeToCube();
}

void VtkPlatonicSolidSourceWrap::SetSolidTypeToDodecahedron(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSolidTypeToDodecahedron();
}

void VtkPlatonicSolidSourceWrap::SetSolidTypeToIcosahedron(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSolidTypeToIcosahedron();
}

void VtkPlatonicSolidSourceWrap::SetSolidTypeToOctahedron(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSolidTypeToOctahedron();
}

void VtkPlatonicSolidSourceWrap::SetSolidTypeToTetrahedron(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlatonicSolidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkPlatonicSolidSourceWrap>(info.Holder());
	vtkPlatonicSolidSource *native = (vtkPlatonicSolidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSolidTypeToTetrahedron();
}

