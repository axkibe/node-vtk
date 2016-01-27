/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkOutlineSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOutlineSourceWrap::ptpl;

VtkOutlineSourceWrap::VtkOutlineSourceWrap()
{ }

VtkOutlineSourceWrap::VtkOutlineSourceWrap(vtkSmartPointer<vtkOutlineSource> _native)
{ native = _native; }

VtkOutlineSourceWrap::~VtkOutlineSourceWrap()
{ }

void VtkOutlineSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOutlineSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OutlineSource").ToLocalChecked(), ConstructorGetter);
}

void VtkOutlineSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOutlineSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOutlineSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateFacesOff", GenerateFacesOff);
	Nan::SetPrototypeMethod(tpl, "generateFacesOff", GenerateFacesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateFacesOn", GenerateFacesOn);
	Nan::SetPrototypeMethod(tpl, "generateFacesOn", GenerateFacesOn);

	Nan::SetPrototypeMethod(tpl, "GetBoxType", GetBoxType);
	Nan::SetPrototypeMethod(tpl, "getBoxType", GetBoxType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateFaces", GetGenerateFaces);
	Nan::SetPrototypeMethod(tpl, "getGenerateFaces", GetGenerateFaces);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetBoxType", SetBoxType);
	Nan::SetPrototypeMethod(tpl, "setBoxType", SetBoxType);

	Nan::SetPrototypeMethod(tpl, "SetBoxTypeToAxisAligned", SetBoxTypeToAxisAligned);
	Nan::SetPrototypeMethod(tpl, "setBoxTypeToAxisAligned", SetBoxTypeToAxisAligned);

	Nan::SetPrototypeMethod(tpl, "SetBoxTypeToOriented", SetBoxTypeToOriented);
	Nan::SetPrototypeMethod(tpl, "setBoxTypeToOriented", SetBoxTypeToOriented);

	Nan::SetPrototypeMethod(tpl, "SetGenerateFaces", SetGenerateFaces);
	Nan::SetPrototypeMethod(tpl, "setGenerateFaces", SetGenerateFaces);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	ptpl.Reset( tpl );
}

void VtkOutlineSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOutlineSource> native = vtkSmartPointer<vtkOutlineSource>::New();
		VtkOutlineSourceWrap* obj = new VtkOutlineSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOutlineSourceWrap::GenerateFacesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateFacesOff();
}

void VtkOutlineSourceWrap::GenerateFacesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateFacesOn();
}

void VtkOutlineSourceWrap::GetBoxType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoxType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutlineSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOutlineSourceWrap::GetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutlineSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOutlineSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
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

void VtkOutlineSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	vtkOutlineSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOutlineSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOutlineSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOutlineSourceWrap *w = new VtkOutlineSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOutlineSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOutlineSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOutlineSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOutlineSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOutlineSourceWrap *w = new VtkOutlineSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutlineSourceWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutlineSourceWrap::SetBoxType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoxType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutlineSourceWrap::SetBoxTypeToAxisAligned(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBoxTypeToAxisAligned();
}

void VtkOutlineSourceWrap::SetBoxTypeToOriented(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetBoxTypeToOriented();
}

void VtkOutlineSourceWrap::SetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateFaces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOutlineSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkOutlineSourceWrap>(info.Holder());
	vtkOutlineSource *native = (vtkOutlineSource *)wrapper->native.GetPointer();
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

